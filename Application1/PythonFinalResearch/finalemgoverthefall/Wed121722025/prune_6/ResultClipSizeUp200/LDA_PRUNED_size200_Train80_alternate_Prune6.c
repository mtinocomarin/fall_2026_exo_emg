// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 79.49%
// test_accuracy: 60.42%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 13:44:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.545853, 0.545797,
    -0.073662, 0.073744,
    0.140087, -0.140095,
    0.159137, -0.159168,
    -0.746414, 0.746390,
    0.074562, -0.074524,
    0.177203, -0.177206,
    0.011846, -0.011868,
    -0.675231, 0.675165,
    0.126179, -0.126019,
    -0.200067, 0.200010,
    0.577257, -0.577302,
};

float Cg_init[2] = {
    -0.317346, -0.317339
};

float xstd_init[12] = {
    0.001026, 0.000078, 0.010116, 0.082304, 0.002293, 0.000619, 0.074190, 0.153491, 0.000905, 0.000115, 0.019268, 0.074961
};

float xmean_init[12] = {
    0.006437, -0.007690, 0.004103, 0.142821, 0.008567, -0.006932, 0.095726, 0.446923, 0.004337, -0.007717, 0.010256, 0.137436
};

