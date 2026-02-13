// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.55%
// test_accuracy: 70.59%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_10.txt', 'act1\\trial_24.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt', 'act1\\trial_16.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_29.txt', 'act2\\trial_11.txt', 'act2\\trial_26.txt', 'act2\\trial_3.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:16:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.589682, 0.589693,
    0.021252, -0.021248,
    0.745157, -0.745171,
    0.275255, -0.275254,
    -0.608330, 0.608173,
    0.279816, -0.279655,
    0.047122, -0.047119,
    0.206044, -0.206049,
    0.279254, -0.279252,
    -0.351599, 0.351608,
    -0.337331, 0.337325,
    0.408785, -0.408790,
};

float Cg_init[2] = {
    -0.305062, -0.305061
};

float xstd_init[12] = {
    0.003826, 0.001608, 0.332688, 0.122535, 0.001028, 0.000184, 0.047136, 0.128998, 0.000643, 0.000158, 0.049426, 0.138479
};

float xmean_init[12] = {
    0.010079, -0.005861, 0.434492, 1.040000, 0.003356, -0.007766, 0.010784, 0.617968, 0.003496, -0.007739, 0.014706, 0.694920
};

