// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.40%
// test_accuracy: 57.81%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 13:44:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.703743, 0.703611,
    0.187171, -0.186939,
    0.080486, -0.080511,
    0.047569, -0.047684,
    -0.529259, 0.529273,
    -0.041562, 0.041573,
    0.025239, -0.025249,
    -0.000568, 0.000548,
    -0.934956, 0.934876,
    0.664285, -0.664147,
    -0.392474, 0.392421,
    0.390852, -0.390876,
};

float Cg_init[2] = {
    -0.318902, -0.318870
};

float xstd_init[12] = {
    0.001039, 0.000081, 0.011391, 0.080367, 0.002408, 0.000673, 0.075722, 0.156736, 0.000906, 0.000123, 0.018947, 0.069969
};

float xmean_init[12] = {
    0.006429, -0.007691, 0.004615, 0.138269, 0.008616, -0.006892, 0.102564, 0.454615, 0.004374, -0.007710, 0.009872, 0.134039
};

