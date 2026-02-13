// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_8\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.23%
// test_accuracy: 71.43%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_15.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-12 13:14:55
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.745968, 0.745957,
    -0.004381, 0.004418,
    0.701394, -0.701386,
    0.479842, -0.479858,
    -0.676931, 0.676898,
    0.274104, -0.274079,
    0.026108, -0.026101,
    0.212363, -0.212354,
    -0.143266, 0.143035,
    -0.024165, 0.024508,
    -0.378565, 0.378453,
    0.379125, -0.379141,
};

float Cg_init[2] = {
    -0.385930, -0.385929
};

float xstd_init[12] = {
    0.004715, 0.002132, 0.341767, 0.122836, 0.001323, 0.000233, 0.062026, 0.132556, 0.000692, 0.000166, 0.053093, 0.142221
};

float xmean_init[12] = {
    0.010860, -0.005563, 0.459523, 1.032500, 0.003533, -0.007737, 0.017063, 0.622261, 0.003558, -0.007731, 0.017262, 0.695119
};

