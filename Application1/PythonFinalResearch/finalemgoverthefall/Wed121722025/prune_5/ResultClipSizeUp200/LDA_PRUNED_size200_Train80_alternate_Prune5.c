// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.63%
// test_accuracy: 60.42%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt']}
// generated: 2025-12-17 13:43:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.413228, 0.413109,
    -0.089349, 0.089584,
    0.153762, -0.153795,
    0.107090, -0.107194,
    -0.679137, 0.679093,
    -0.050479, 0.050537,
    0.260836, -0.260818,
    0.081165, -0.081194,
    -0.598648, 0.598563,
    -0.000667, 0.000866,
    -0.103915, 0.103854,
    0.505522, -0.505577,
};

float Cg_init[2] = {
    -0.260945, -0.260950
};

float xstd_init[12] = {
    0.001026, 0.000077, 0.010259, 0.081250, 0.002277, 0.000610, 0.074720, 0.152945, 0.000904, 0.000117, 0.019005, 0.076112
};

float xmean_init[12] = {
    0.006439, -0.007691, 0.004280, 0.141482, 0.008557, -0.006932, 0.096625, 0.446420, 0.004336, -0.007717, 0.009877, 0.136049
};

