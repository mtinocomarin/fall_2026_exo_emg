// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.75%
// test_accuracy: 76.56%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_20.txt'], 'act2': ['act2\\trial_12.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt', 'act2\\trial_14.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-12 15:49:28
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.895512, 0.895564,
    -0.188332, 0.188327,
    0.467397, -0.467433,
    0.913674, -0.913679,
    0.966200, -0.966298,
    -1.065970, 1.066087,
    0.004984, -0.004996,
    -0.028634, 0.028634,
    -0.596943, 0.597055,
    0.592986, -0.593233,
    -0.592656, 0.592747,
    0.274512, -0.274410,
};

float Cg_init[2] = {
    -0.441349, -0.441385
};

float xstd_init[12] = {
    0.003697, 0.001377, 0.103029, 0.177013, 0.001609, 0.000490, 0.029048, 0.081857, 0.001530, 0.000090, 0.018894, 0.065828
};

float xmean_init[12] = {
    0.009761, -0.006270, 0.173267, 0.579200, 0.003190, -0.007736, 0.007000, 0.048500, 0.003262, -0.007806, 0.004933, 0.068800
};

